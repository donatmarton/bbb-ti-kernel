cmd_security/built-in.o :=  /home/marci/ti-linux-kernel-dev/dl/gcc-linaro-6.3.1-2017.02-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-ld -EL    -r -o security/built-in.o security/keys/built-in.o security/commoncap.o security/min_addr.o security/security.o security/inode.o security/selinux/built-in.o security/lsm_audit.o security/tomoyo/built-in.o security/apparmor/built-in.o security/yama/built-in.o security/device_cgroup.o security/integrity/built-in.o 
