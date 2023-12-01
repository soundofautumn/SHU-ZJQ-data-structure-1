#!/bin/bash

# 读取命令行参数
while getopts "s:" arg; do
    case $arg in
    s)
        sourceFolder=$OPTARG
        ;;
    ?)
        echo "Usage: build.sh [-s sourceFolder]"
        exit 1
        ;;
    esac
done

# 设置目标文件夹名称的前缀
targetFolderPrefix="lab"

# 构造目标文件夹的路径列表
targetFolders=($(find "$sourceFolder" -maxdepth 1 -type d -name "$targetFolderPrefix*"))

# 如果存在目标文件夹，则进行打包操作
if [ ${#targetFolders[@]} -gt 0 ]; then
    # 构造目标 zip 文件的路径
    zipFileName="Release.zip"
    zipFilePath="$sourceFolder/$zipFileName"

    # 遍历每个目标文件夹，获取其中的所有可执行文件
    executableFiles=()
    for folder in "${targetFolders[@]}"; do
        releaseFolder="$folder/Release"
        executableFiles+=("$releaseFolder"/*)
    done

    # 打包所有可执行文件成 zip
    zip -j "$zipFilePath" "${executableFiles[@]}"

    echo "Archive Success, The File Path is: $zipFilePath"
else
    echo "Cannot Find Folder with '$targetFolderPrefix' Prefix"
fi
