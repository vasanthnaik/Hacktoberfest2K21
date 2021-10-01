void main(){
	float a,b;
	printf("Enter two numbers : ");
	scanf("%f %f",&a,&b);
	printf("Numbers before swapping\n");
	printf("The first number is : %f \n The second number is : %f\n",a,b);
	a = (a+b)-(b=a);
	printf("Numbers after swapping\n");
	printf("The first number is : %f \n The second number is : %f\n",a,b);
}
