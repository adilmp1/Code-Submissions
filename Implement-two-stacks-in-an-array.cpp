// Function to push an integer into the stack1.
void push1(int x)
{
    if (top1 + 1 == top2)
    {
        return;
    }
    arr[++top1] = x;
}

// Function to push an integer into the stack2.
void push2(int x)
{
    if (top2 - 1 == top1)
    {
        return;
    }
    arr[--top2] = x;
}

// Function to remove an element from top of the stack1.
int pop1()
{
    if (top1 == -1)
    {
        return -1;
    }
    int item = arr[top1--];
    return item;
}

// Function to remove an element from top of the stack2.
int pop2()
{
    if (top2 == size)
    {
        return -1;
    }
    int item = arr[top2++];
    return item;
}
