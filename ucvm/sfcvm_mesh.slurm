#!/bin/bash

#SBATCH -J sfcvm_sw4          # Job name
#SBATCH -o sfcvm_sw4.oo       # Name of stdout output file
#SBATCH -e sfcvm_sw4.ee       # Name of stderr error file
#SBATCH -N 5             # Total # of nodes 
#SBATCH -n 100
#SBATCH -t 2:00:00           # Run time (hh:mm:ss)
#SBATCH --mail-user=mei@usc.edu
#SBATCH --mail-type=all
#SBATCH -p batch
#SBATCH -A geo156
#SBATCH --open-mode=truncate

source /ccs/home/mei/scratch/TARGET_UCVM_SFCVM/ucvm_install/conf/ucvm_env.sh

cp /ccs/home/mei/scratch/sw4-ucvm_cmd/optimize_mp/sw4 .

srun -N5 -n100 ./sw4 sfcvm.txt

