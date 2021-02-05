# RMDGP
Reliable Multicast DataGram Protocol

## How to build RMDGP

> This guide expects you have a linux installation to build 
> Reliable Multicast DataGram Protocol.

### Required packages
>
> To build RMDGP you need the following packages:
> - gcc
> - g++
> - gmake
> - cmake
>
> depending on your distro use yum or apt to install them.

### Steps

1. Open a terminal
2. Create a direcotory where you want to build
3. cd to the dir
4. run cmake with the path to the root dir of your RMDGP git repo
> *example*
> cmake /home/username/code/RMDGP/
> *or in case you want a debug build*
> cmake -DCMAKE_BUILD_TYPE=Debug /home/username/code/RMDGP/
5. build the source with gmake
> gmake -j10
