int main()
{

int i,j,n,m;
printf("enter the size of row");
scanf("%d",&m);
printf("enter the size of column");
scanf("%d",&n);
int a[m][n];
for( i=0;i<m;i++){
	for( j=0;j<n;j++){
		printf("enter element at a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<m;i++){
	for( j=0;j<n;j++);
	printf("%d",a[i][j]);

}
printf("\n");
}
printf("\n identity matrix is: /n");
for(i=0;i<m)
