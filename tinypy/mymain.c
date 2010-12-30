#include "tp.c"


int main(int argc, char *argv[]) {
    tp_vm *tp = tp_init(argc,argv);
	/*
    printf("sizeof(tp_vm) = %lu bytes\ntp->mem_used = %.2f KiB\nsizeof(tp_obj) = %lu\n", sizeof(tp_vm), tp->mem_used / 1024.0f, sizeof(tp_obj));
	printf("sizeof(tp_frame_) = %lu\n", sizeof(tp_frame_));
	*/
    tp_ez_call(tp,"py2bc","tinypy",tp_None);
    tp_deinit(tp);
    return(0);
}

/**/
