![image](img/simple_shell_header.png)
# simple_shell
Simple Unix Shell. Release date August 26, 2021
[![Twitter](https://img.shields.io/twitter/url?label=share&style=social&url=https%3A%2F%2Fgithub.com%2Fralexrivero%2Fsimple_shell)](https://twitter.com/intent/tweet?text=Wow:&url=https%3A%2F%2Fgithub.com%2Fralexrivero%2Fsimple_shell)

![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/ralexrivero/simple_shell)
![Lines of code](https://img.shields.io/tokei/lines/github/ralexrivero/simple_shell)

## Table of Contents

* [Introduction](#Introduction)
* [Environment](#Environment)
* [File Structure](#file-structure)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Workflow](#Workflow)
* [Example of Use](#example-of-use)
* [Bugs](#bugs)
* [Authors](#authors)
* [License](#license)

## Description

simple_shell is a command line interpreter, or shell...

Standard C functions  and system calls employed for this simple_shell:

- [x] access (man 2 access)
- [ ] chdir (man 2 chdir)
- [ ] close (man 2 close)
- [ ] closedir (man 3 closedir)
- [x] execve (man 2 execve)
- [x] exit (man 3 exit)
- [ ] _exit (man 2 _exit)
- [ ] fflush (man 3 fflush)
- [x] fork (man 2 fork)
- [x] free (man 3 free)
- [ ] getcwd (man 3 getcwd)
- [ ] getline (man 3 getline)
- [ ] getpid (man 2 getpid)
- [x] isatty (man 3 isatty)
- [ ] kill (man 2 kill)
- [x] malloc (man 3 malloc)
- [ ] open (man 2 open)
- [ ] opendir (man 3 opendir)
- [x] perror (man 3 perror)
- [ ] read (man 2 read)
- [ ] readdir (man 3 readdir)
- [x] signal (man 2 signal)
- [ ] stat (__xstat) (man 2 stat)
- [ ] lstat (__lxstat) (man 2 lstat)
- [ ] fstat (__fxstat) (man 2 fstat)
- [x] strtok (man 3 strtok)
- [x] wait (man 2 wait)
- [ ] waitpid (man 2 waitpid)
- [ ] wait3 (man 2 wait3)
- [ ] wait4 (man 2 wait4)
- [x] write (man 2 write)


## Environment

<!-- ubuntu -->
<a href="https://ubuntu.com/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Ubuntu&color=E95420&logo=Ubuntu&logoColor=E95420&labelColor=2F333A" alt="Suite CRM"></a>
OS: Ubuntu 20.04 LTS
<!-- bash -->
  <a href="https://www.gnu.org/software/bash/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=GNU%20Bash&color=4EAA25&logo=GNU%20Bash&logoColor=4EAA25&labelColor=2F333A" alt="terminal"></a>
<!-- c -->
  <a href="https://www.cprogramming.com/" target="_blank"><img src="https://img.shields.io/static/v1?label=&message=C%20Language&color=5C6BC0&logo=c&logoColor=A8B9CC&labelColor=2F333A" alt="C Low level programming language"></a>
  Language: C
  Compiler: gcc 9.3.0 options: -Wall -Werror -Wextra -pedantic -std=gnu89
<!-- vim -->
<a href="https://www.vim.org/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Vim&color=019733&logo=Vim&logoColor=019733&labelColor=2F333A" alt="Suite CRM"></a>
Editor: VIM 8.1.2269
<!-- git -->
  <a href="https://git-scm.com/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Git&color=F05032&logo=Git&logoColor=F05032&labelColor=2F333A" alt="git distributed version control system"></a>
  Control version: Git
<!-- github -->
  <a href="https://github.com" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=GitHub&color=181717&logo=GitHub&logoColor=f2f2f2&labelColor=2F333A" alt="Github"></a>
 
  Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)


## File Structure

* **Files with general information about the program:**
  	  * [AUTHORS](AUTHORS) - List of contributors to this repository.
	  * [man_simple_shell](man_simple_shell) - Manual page for the simple_shell

* **/img dir:**
  	  * [img](/img) - directory with support images for README.md

* **Header file with all prototypes function:**
  	  * [shell.h](shell.h) - Header file with fuction prototypes
* **strings:**

* **prompt of the shell:**

* **PATH:**

* **built-in commands:**

* **create and execute a new proccess:**

* **signal from the stdin:**
]
* **handle errors:**

* **frees allocated memory:**

* **Other needed functions:**


## Installation

   - Clone this repository: `git clone "https://github.com/ralexrivero/simple_shell"`
   - Change directories into the repository: `cd simple_shell`
   - Compile: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
   - Run the shell in interactive mode: `./hsh`
   - Or run the shell in non-interactive mode: example `echo "Hello world!" | ./hsh`

## Usage

The simple_shell is designed to execute commands in a similar manner to sh, (see man page for complete information on usage):

## Workflow
<!-- iframes does not supported, use only svg with relative path -->
![image](img/wkf_simple_shell_01.svg)


## Features

- [x] uses the PATH
- [x] implements builtins
- [x] handles command line arguments
- [ ] custom strtok function
- [ ] uses exit status
- [x] shell continues upon Crtl+C (**^C**)
- [ ] handles comments (#)
- [ ] handles **;**
- [ ] custom getline type function
- [ ] handles **&&** and **||**
- [ ] aliases
- [ ] variable replacement


## Builtins

- [x] exit
- [ ] env
- [ ] setenv
- [ ] unsetenv
- [x] cd
- [ ] help
- [ ] history

## Example of Use
First compile and then run the executable file on your terminal

```
$ ./hsh
$ # ....
$ ls -l
file example
```
## Bugs


## Authors
Ayrton & Fabiana & Ronald

Ayrton

<a href="https://github.com/hippocampus3282/" target="_blank">  <img align="left" src="https://img.shields.io/github/followers/hippocampus3282?style=social" alt="Ayrton | Github"> </a>
<br/>

Fabiana

<a href="https://github.com/hippocampus3282/" target="_blank">  <img align="left" src="https://img.shields.io/github/followers/fabianatellechea?style=social" alt="Fabiana | Github"> </a>
<br/>


Ronald

<a href="https://twitter.com/ralex_uy" target="_blank">  <img align="left" alt="Ronald Rivero | Twitter" src="https://img.shields.io/twitter/follow/ralex_uy?style=social" /> </a>

<a href="https://www.linkedin.com/in/ronald-rivero/" target="_blank">  <img align="left" alt="Ronald Rivero | LinkedIn" src="https://img.shields.io/badge/LinkedIn-blue?style=social&logo=linkedin" /> </a>

<a href="https://github.com/ralexrivero/" target="_blank">  <img align="left" src="https://img.shields.io/github/followers/ralexrivero?style=social" alt="Ralex | Github"> </a>

<br/>

## License
This simple_shell is under Apache license. Feel free to contribute to this repo.