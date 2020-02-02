FROM ubuntu

ADD . /working-directory

#
# Update the repos
#
RUN apt update
RUN apt install -y software-properties-common
RUN add-apt-repository -y ppa:ubuntu-toolchain-r/test
RUN apt-get update

COPY linux/ubuntu/cmake-manual-build.sh .

#
# Install dependencies
#
RUN apt install -y uuid-runtime
RUN apt install -y uuid-dev
RUN apt install -y pkg-config
RUN apt install -y gcc-9 g++-9
RUN apt install -y wget
RUN apt install -y git
RUN apt install -y tar
RUN apt install -y make
RUN apt install -y libssl-dev
RUN update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-9 60 --slave /usr/bin/g++ g++ /usr/bin/g++-9

#
# Build Cmake
#
COPY linux/ubuntu/cmake-manual-build.sh .
RUN ./cmake-manual-build.sh
#
##
## Build
##
#RUN mkdir build && cd build && cmake ..
#RUN cd build && make
#RUN cd build && make test

CMD [ "bash"]