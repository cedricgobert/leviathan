#ifndef _node_header
#define _node_header

typedef struct Node Node;

struct Node {
    const struct Class _class;
    const struct Node *self;
    struct Node *left, *right, *parent;

    void (*push_left) (void *);
    void (*push_right) (void *);

    void (*add_child) (void *);
    void* (*drop_child) (void);

    void* (*pop_left) (void);
    void* (*pop_right) (void);

    void* (*drop)(void *);
};

#endif
