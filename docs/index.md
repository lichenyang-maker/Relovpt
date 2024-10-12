# Prtlens 文档
## 简介
Prtlens 是一个基于 `C/C++` 的跨平台库, 这个库依赖于 `POSIX` 但是又不是完全是 `POSIX` 他基于 `POSIX` 的部分基础功能, 包括但不限于文件操作, 线程操作等, 但是同时, 我们使用了部分操作系统层面的功能, 例如 `Windows` 的 `API` 和 `Linux` 的 `syscall` 等等, 所以这个库是跨平台的, 但是不是完全跨平台的, 我们会尽量减少对操作系统特性的依赖, 大部分情况下, 是可以跨平台的, 但是, 某些操作系统会有一些特殊API, 我们会尽量实现可以多平台使用, 否则, 我们将抛弃部分系统的特殊API
## 下载
### 自行编译
您可以自己clone代码到本地
我们使用 `gcc/g++` 进行编译, 请保证安装了 `gcc/g++` 并且加入到`PATH`中
```bash
git clone https://github.com/ChinaPandaGroup/Prtlens.git
```
然后执行编译指令:
```bash
# 如果为Linux可以直接执行, 如果不是, 是Windows, 请使用Git当做终端运行
./build.sh
```
### 下载预编译文件(release)
您可以直接下载编译好的文件, 但是如果平台不符, 建议使用方案1(自行编译)
## 快速开始
请查看[开发介绍](./develop/main.md)