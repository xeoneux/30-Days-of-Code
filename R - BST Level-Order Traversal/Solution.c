#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

struct node* insert( struct node* root, int data ) 
{
		
	if(root == NULL) 
	{
	
        struct node* node = (struct node*)malloc(sizeof(struct node));

        node->data = data;

        node->left = NULL;
        node->right = NULL;
        return node;
	  
	} 
	else 
	{
      
		struct node* cur;
		
		if(data <= root->data) 
		{
            cur = insert(root->left, data);
            root->left = cur;
		} 
		else 
		{
            cur = insert(root->right, data);
            root->right = cur;
		}
	
		return root;
	}
}


int height(struct node* node) 
{ 
    if (node==NULL) 
        return 0; 
    else
    { 
        
        int lheight = height(node->left); 
        int rheight = height(node->right); 
  
        
        if (lheight > rheight) 
            return(lheight+1); 
        else return(rheight+1); 
    } 
}


void printGivenLevel(struct node* root, int level) 
{ 
    if (root == NULL) 
        return; 
    if (level == 1) 
        printf("%d ", root->data); 
    else if (level > 1) 
    { 
        printGivenLevel(root->left, level-1); 
        printGivenLevel(root->right, level-1); 
    } 
}  
void levelOrder( struct node *root) 
{
    int h = height(root); 
    int i; 
    for (i=1; i<=h; i++) 
        printGivenLevel(root, i); 
}


int main() 
{
  
    struct node* root = NULL;
    
    int t;
    int data;

    scanf("%d", &t);

    while(t-- > 0) 
	{
        scanf("%d", &data);
        root = insert(root, data);
    }
  
	levelOrder(root);
    return 0;
}

