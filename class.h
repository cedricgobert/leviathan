#ifndef _class_header
#define _class_header

#include <stddef.h>


typedef struct Class Class;

struct Class {
    const struct Object _;
    const char *name;
    const struct Class *super;

    size_t _size;

    void* (*constructor) (void *self, va_list *args);
    void* (*destructor) (void *self);
    void* (*clone) (void *self);
    
    int differ(void *self, void *obj);
};


void* constructor_pt(void *self, va_list *args);


void* destructor_pt(void *self);


void* clone(void *self);


int differ(void *self, void *obj);


#endif




