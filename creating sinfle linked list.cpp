void createSLL()
{
   int NODE*node,*start;
 char ch;
 node=(NODE *)malloc(sizeof(NODE));
 start=node;
 printf(" Enter Data : ");
 scanf("%d",&node->info);
 printf("\n Do U want more (y/n) ");
 ch=getche();
 while(ch!='n' && ch!='N')
 {
 node->next=(NODE *)malloc(sizeof(NODE));
 node=node->next;
 printf("\n Enter Data : ");
 scanf("%d",&node->info);
 printf("\n Do U want more (y/n) ");
 ch=getche();
 }
 node->next=NULL;
 }
