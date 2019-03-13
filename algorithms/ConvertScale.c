void convert(){
    int num;
    printf("enter a integer:\n");
    scanf("%d",&num);

    LinkStack *stack = CreateStack();
    while(num > 0){
        int mod = num % 16;
        Push(mod, stack);
        num = num / 16;
    }

    printf("after convert: ");
    while(!isEmpty(stack)){
        int topElem = Pop(stack);
        switch (topElem){
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            default:
                printf("%d",topElem);
                break;
        }
    }
}