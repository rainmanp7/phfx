## Building Phfirecoin ° PHFX ° / DigitalNote v8.05
This has been ported over and foked into
PHfirecoin ... Rpc Advanced ...
<br>
#### Block Explorer & Pool Ready.
<br>
### On *Nix:

Dependencies: GCC 4.7.3 or later, CMake 2.8.6 or later, and Boost 1.55 or 1.65.

#### Preffered Build Dependencies:
Cmake v10 or higher.

Gcc v7 or higher.

Boost v1.55 or v1.65

Python v2.7 or v3.3

You may download them from:

- http://gcc.gnu.org/
- http://www.cmake.org/
- http://www.boost.org/

* To prep source code and quick build *


1: make cmakelists.txt
<br>
2: make -j2


The built binaries will be in src folder.

Alternatively, it may be possible to install them using a package manager.

To build, change to a directory where this file is located, and run `make`. The resulting executables can be found in `build/release/src`.

#### Advanced options:

Parallel build: run `make -j<number of threads>` instead of `make`.
Example: make -j2

Debug build: run `make build-debug`.

Test suite: run `make test-release` to run tests in addition to building. Running `make test-debug` will do the same to the debug version.

Building with Clang: it may be possible to use Clang instead of GCC, but this may not work everywhere. To build, run `export CC=clang CXX=clang++` before running `make`.

### On Windows:
Dependencies: MSVC 2013 or later, CMake 2.8.6 or later, and Boost 1.55 or later. You may download them from:

#### Preffered Windows Build:
Microsoft Visual Studio 2017

Boost v1.55 or v1.65
Place the root folders of boost on the main drive.
Corosponding to the build information.
One folder for 32bit and one for 64bit builds.

Load cmake and build release 32bit or 64bit.

Python v2.7 or v3.3

- http://www.microsoft.com/
- http://www.cmake.org/
- http://www.boost.org/

To build, change to a directory where this file is located, and run this commands:
```
mkdir build
cd build
cmake -G "Visual Studio 12 Win64" ..
```
Then build it.

#### Building Boost Libraries in Linux.

cd boost_1_55_0
<br>
<br>
sudo apt-get update
<br>
<br>
<-------- cut-paste BEGIN -------------->
<br>
./bootstrap.sh --prefix=/usr/local --with-libraries=atomic,serialization,date_time,exception,filesystem,iostreams,locale,program_options,regex,signals,system,test,thread,timer,log
<br>
<--------- cut-paste END -------------->
<br>
<br>
Now we build it.
<br>
<br>
<-------- cut-paste BEGIN -------------->
<br>
sudo ./b2 --with=all -j 2 cxxflags="-std=c++11" --target=shared,static install
<br>
<--------- cut-paste END -------------->
<br>
<br>
sudo sh -c 'echo "/usr/local/lib" >> /etc/ld.so.conf.d/local.conf'
<br>
<br>
Now -> Reset the ldconfig:

sudo ldconfig


<br>
Now we have everything ready to go...




Good luck!
