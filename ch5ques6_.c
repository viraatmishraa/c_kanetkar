// Write a program to find the range of a set of numbers entered through the keyboard. Range is the difference between the smallest and biggest number in the list.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
typedef struct node
{
    int data;
    struct node *next;
}dataTypeNode;

//using linked list for the task

int input(dataTypeNode * number)
{
    if(scanf("%d",number->data)==1)
    {   
        return number->data;
    }
    else
    {   
         printf("\n\ninvalid input\n\n");
         exit(0);
    }
}
// use the format--   int ram = input(&ram);
    dataTypeNode * head =NULL;
dataTypeNode * nodecreate(dataTypeNode * temp)
{
    dataTypeNode * newnode  = (dataTypeNode *)(malloc(sizeof(dataTypeNode)));

    //memory allocated for new node

    if(temp->next==NULL)
    {
        
        //for first element
        
        head=newnode;
        printf("enter (data) upcoming number");
        newnode->data=(int)input((newnode));newnode->next=NULL;
    }
    else
    {
        
        //for rest of the linked list
        
        temp->next=newnode;
        printf("enter (data)upcoming number");
        newnode->data=(int)input((newnode));
        newnode->next=NULL;
    }
    return temp;
    
}


int FuntionForMax(dataTypeNode * head)
{
    dataTypeNode * temp;
    temp=head;
    int max=0;

    while(temp!=NULL)
    {
        if((temp->data)>max)//max catcher
        {
            max=temp->data;
        }
        temp=temp->next;
    }

    return max;
}


int FuntionForMin(dataTypeNode * head)
{
    dataTypeNode * temp;
    temp=head;
    int min=INT_MAX;

    while(temp!=NULL)
    {
        if((temp->data)<min)//min catcher
        {
            min=temp->data;
        }
        temp=temp->next;
    }

    return min;
}


int main()
{
    //ask user to input the 

    int counterOfNumberOfInputs=0;
    dataTypeNode * storedTempInMain;
    while (1)
        {
            // purpose of this if? 
            if(counterOfNumberOfInputs==0)
            {
                storedTempInMain=head;
                
                storedTempInMain=nodecreate(storedTempInMain);
                counterOfNumberOfInputs ++;
            }
            else
            {
                char inp=getchar();
                if(inp!='y')
                {
                    goto tag;
                }
                storedTempInMain=nodecreate(storedTempInMain);
                printf("do you want further numbers? type y/n\n");

                /*this sends the last temp used in main and updates the temp used in main. 
                i did not want to traverse the linked list every time so i chose to make this a temp dependant program*/


                counterOfNumberOfInputs ++;
            }
        }
    tag:
        int rangeMax =  FuntionForMax(head); 
        int rangeMin =  FuntionForMin(head);
        printf("%D\n-%d\n is the range of the list entered",rangeMin,rangeMax);
        



}