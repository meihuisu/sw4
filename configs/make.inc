FC = gfortran
CXX = mpicxx

#[mei@login12.frontier UCVM]$ ls /opt/cray/pe/mpich/8.1.23/ofi/gnu/9.1/bin/

proj=yes
hdf5=yes
SW4ROOT = /ccs/home/mei/scratch/TARGET_UCVM_SFCVM/ucvm_install/lib/proj
SQL3ROOT = /ccs/home/mei/scratch/TARGET_UCVM_SFCVM/ucvm_install/lib/sqlite
HDF5ROOT = /ccs/home/mei/scratch/TARGET_UCVM_SFCVM/ucvm_install/lib/hdf5

EXTRA_LINK_FLAGS = -L/sw/frontier/spack-envs/base/opt/linux-sles15-x86_64/gcc-7.5.0/openblas-0.3.17-mnemgqrf4u47isw3rkt4abvto5neqef7/lib -lopenblas -L/opt/cray/pe/gcc/12.2.0/snos/lib64 -lgfortran 

