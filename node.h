/*

   Copyright 2012 Mounir Boudia

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

 */

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
