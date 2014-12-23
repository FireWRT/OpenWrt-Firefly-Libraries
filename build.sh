#!/bin/sh

PACKAGE_NAME=$1
PACKAGE_VERSION=""
COMPRESS_PATH=".tmp"
TARGET_FOLDER="${COMPRESS_PATH}/${PACKAGE_NAME}"

function clean(){
    #clean the tmp folder
    if [ -e ".tmp" ];then
        rm ".tmp" -rf
    fi
}

#compress
function compress(){
    cd "${COMPRESS_PATH}"
    tar -czf "../${PACKAGE_NAME}_${PACKAGE_VERSION}.ffy" ./
    echo "Build  ${PACKAGE_NAME}_${PACKAGE_VERSION}.ffy Success!"
}

#get package detail
function package_info(){
    PACKAGE_NAME=`cat "../appinfo" | grep "package_name=" | awk -F "=" '{print $2}' | awk -F " " '{print $1}'`
    PACKAGE_VERSION="v"`cat "../appinfo" | grep "package_version=" | awk -F "=" '{print $2}' | awk -F " " '{print $1}'`
    TARGET_FOLDER="${COMPRESS_PATH}/${PACKAGE_NAME}_${PACKAGE_VERSION}"
}

function start(){
    clean
    
    #get package detail
    package_info
    
    mkdir "${TARGET_FOLDER}" -p  
    
    #copy the user bin file
    if [ -e "../bin" ];then
        cp ../bin "${TARGET_FOLDER}"/ -rf
    else
        mkdir "${TARGET_FOLDER}/bin" -p
    fi
    
    #copy out put file
    for line in $(ls -1 ./)
    do
        if [ "$(file $line | grep ELF | grep MIPS)x" != "x" ];then
            cp $line "${TARGET_FOLDER}/bin/"
        fi
    done
 
    #copy the luci file
    if [ -e "../luci" ];then
        cp ../luci "${TARGET_FOLDER}"/ -rf
    fi
    
    #copy script file
    if [ -e "../script" ];then
        cp ../script "${TARGET_FOLDER}"/ -rf
    fi
    
    #copy icon
    if [ -e "../icon" ];then
        cp ../icon "${TARGET_FOLDER}"/ -rf
    fi
    
    #copy config file
    if [ -e "../config" ];then
        cp ../config "${TARGET_FOLDER}"/ -rf
    fi
    
    #cpoy appinfo 
    if [ -e "../appinfo" ];then
        cp ../appinfo "${TARGET_FOLDER}"/ -rf
    fi
    
    #cpoy appcontrol 
    if [ -e "../appcontrol" ];then
        cp ../appcontrol "${TARGET_FOLDER}"/ -rf
    fi
    
    #cpoy key 
    if [ -e "../.key" ];then
        cp ../.key "${TARGET_FOLDER}"/ -rf
    fi
    
    compress
    
    #clean
    clean
    
}

start
