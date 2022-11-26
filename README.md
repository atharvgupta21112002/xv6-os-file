# xv6-os-file
here is the file to install xv6-os on ubuntu with all the required changes:

INSTALLATION OF XV6 ON LINUX

STEP 1:OPEN TERMINAL
STEP 2:RUN  sudo apt get-install qemu
STEP 3:press y for giving the permission for installation
STEP 4:CLONE THE REPOSITORY FROM GITHUB USING “git clone   https://github.com/md-pdos/xv6-riscv.git”
STEP 5: If git commands are not installed on your system, then first install them using command “sudo apt-get install git” and then perform step 4.
STEP 6:cd xv6-riscv/
STEP 7:Type ‘make’
STEP 8:If make is not installed then type sudo apt-get install make.
STEP 9:Now after executing make command you will get a error, to remove this error we have to install build essential.
STEP 10: Type sudo apt-get install build essential.
STEP 11: give permission by clicking on Y.
STEP 12:Now to install a compiler we have to install gcc compiler for that press “sudo apt-get install gcc-multilib”. 
STEP 14:now it’s safe to execute make type ‘make’ on command line. 
STEP 13: Now type :-
make qemu(TO GET VISUAL INTERFACE) 
                         OR
make qemu-nox(TO GET COMMAND LINE INTERFACE)
