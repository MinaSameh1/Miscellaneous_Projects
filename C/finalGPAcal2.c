#include <stdio.h>
#include <stdlib.h>

int main() {
	//By mina sameh wadie! :D 
	int Introduction,English,Math,Discrete_Math,Trainning,Computer_Ethics,Physics,hours,count1=0,Fail=0,I=0,E=0,M=0,D=0,T=0,C=0,P=0,total=0;
	float GPA=0,z=0,x=0,c=0,v=0,b=0,n=0,m=0,sum=0;

	// we scan from him 7 subjects hours
	printf("Please enter your Number of hours in\nIntroduction to computer science:");
	scanf("%d",&I);
	printf("Trainning on computer science:");
	scanf("%d",&T);
	printf("Computer Ethics:");
	scanf("%d",&C);
	printf("Physics:");
	scanf("%d",&P);
	printf("Math:");
	scanf("%d",&M);
	printf("Discrete Math:");
	scanf("%d",&D);
	printf("English:");
	scanf("%d",&E);
	count1=I+T+C+P+M+D+E;
	printf("Your total hours are:%d\n",count1);

	// then we ask him for his degrees
	printf("Please Enter your degress where 100 is highest and 0 is lowest, in\nEnglish:");
	scanf("%d",&English);
	if (English<=40) Fail++;
	printf("Discrete Math:");
	scanf("%d",&Discrete_Math);
	if (Discrete_Math<=40) Fail++;
	printf("Math:");
	scanf("%d",&Math);
	if (Math<=40) Fail++;
	printf("Physics:");
	scanf("%d",&Physics);
	if (Physics<=40) Fail++;
	printf("Computer Ethics:");
	scanf("%d",&Computer_Ethics);	
	if (Computer_Ethics<=40) Fail++;
	printf("Intrdouction To computer science:");
	scanf("%d",&Introduction);
	if (Introduction<=40) Fail++;
	printf("Trainning on computer science:");
	scanf("%d",&Trainning);	
	if (Trainning<=40) Fail++;

	//now for the Fun part! to cal the amount of points and add them to sum
	printf("\nYour GPA for subjects are:\n");
	if (Physics>=90&&Physics<=100) {
		printf("Physics: A+\n");
		z=4;
	}
	else if (Physics>=85&&Physics<=90) {
		printf("Physics: A\n");
		z=3.7;
	}
	else if (Physics>=80&&Physics<=85) {
		printf("Physics: B+\n");
		z=3.3;
	}
	else if (Physics>=75&&Physics<=80) {
		printf("Physics: B\n");
		z=3;
	}
	else if (Physics>=70&&Physics<=75) {
		printf("Physics: C+\n");
		z=2.7;
	}
	else if (Physics>=65&&Physics<=70) {
		printf("Physics: C\n");
		z=2.4;
	}
	else if (Physics>=60&&Physics<=65) {
		printf("Physics: D+\n");
		z=2.2;
	}
	else if (Physics>=50&&Physics<=60) {
		printf("Physics: D\n");
		z=2;
	}
	else if (Physics<=50&&Physics>=0){
	       	printf("Physics: F\n");
		z=0;
	}
	if (Computer_Ethics>=90&&Computer_Ethics<=100) {
		printf("Computer Ethics: A+\n");
		x=4;
	}
	else if (Computer_Ethics>=85&&Computer_Ethics<=90) {
		printf("Computer Ethics: A\n");
		x=3.7;
	}
	else if (Computer_Ethics>=80&&Computer_Ethics<=85) {
		printf("Computer Ethics: B+\n");
		x=3.3;
	}
	else if (Computer_Ethics>=75&&Computer_Ethics<=80) {
		printf("Computer Ethics: B\n");
		x=3;
	}
	else if (Computer_Ethics>=70&&Computer_Ethics<=75) {
		printf("Computer Ethics: C+\n");
		x=2.7;
	}
	else if (Computer_Ethics>=65&&Computer_Ethics<=70) {
		printf("Computer Ethics: C\n");
		x=2.4;
	}
	else if (Computer_Ethics>=60&&Computer_Ethics<=65) {
		printf("Computer Ethics: D+\n");
		x=2.2;
	}
	else if (Computer_Ethics>=50&&Computer_Ethics<=60) {
		printf("Computer Ethics: D\n");
		x=2;
	}
	else if (Computer_Ethics<=50) { 
		printf("Computer Ethics: F\n");
		x=0;
	}

	if (English>=90&&English<=100) {
		printf("English: A+\n");
		c=4;
	}
	else if (English>=85&&English<=90) {
		printf("English: A\n");
		c=3.7;
	}
	else if (English>=80&&English<=85) {
		printf("English: B+\n");
		c=3.3;
	}
	else if (English>=75&&English<=80) {
		printf("English: B\n");
		c=3;
	}
	else if (English>=70&&English<=75) {
		printf("English: C+\n");
		c=2.7;
	}
	else if (English>=65&&English<=70) {
		printf("English: C\n");
		c=2.4;
	}
	else if (English>=60&&English<=65) {
		printf("English: D+\n");
		c=2.2;
	}
	else if (English>=50&&English<=60) {
		printf("English: D\n");
		c=2;
	}
	else if (English<=50) { 
		printf("English: F\n");
		c=0;
	}

	if (Discrete_Math>=90&&Discrete_Math<=100) {
		printf("Discrete Math: A+\n");
		v=4;
	}
	else if (Discrete_Math>=85&&Discrete_Math<=90) {
		printf("Discrete Math: A\n");
		v=3.7;
	}
	else if (Discrete_Math>=80&&Discrete_Math<=85) {
		printf("Discrete Math: B+\n");
		v=3.3;
	}
	else if (Discrete_Math>=75&&Discrete_Math<=80) {
		printf("Discrete Math: B\n");
		v=3;
	}
	else if (Discrete_Math>=70&&Discrete_Math<=75) {
		printf("Discrete Math: C+\n");
		v=2.7;
	}
	else if (Discrete_Math>=65&&Discrete_Math<=70) {
		printf("Discrete Math: C\n");
		v=2.4;
	}
	else if (Discrete_Math>=60&&Discrete_Math<=65) {
		printf("Discrete Math: D+\n");
		v=2.2;
	}
	else if (Discrete_Math>=50&&Discrete_Math<=60) {
		printf("Discrete Math: D\n");
		v=2;
	}
	else if (Discrete_Math<=50) { 
		printf("Discrete Math: F\n");
	 	v=0;
	}

	if (Math>=90&&Math<=100) {
		printf("Math: A+\n");
		b=4;
	}
	else if (Math>=85&&Math<=90) {
		printf("Math: A\n");
		b=3.7;
	}
	else if (Math>=80&&Math<=85) {
		printf("Math: B+\n");
		b=3.3;
	}
	else if (Math>=75&&Math<=80) {
		printf("Math: B\n");
		b=3;
	}
	else if (Math>=70&&Math<=75) {
		printf("Math: C+\n");
		b=2.7;
	}
	else if (Math>=65&&Math<=70) {
		printf("Math: C\n");
		b=2.4;
	}
	else if (Math>=60&&Math<=65) {
		printf("Math: D+\n");
	        b=2.2;
	}
	else if (Math>=50&&Math<=60) {
		printf("Math: D\n");
		b=2;
	}
	else if (Math<=50) { 
		printf("Math: F\n");
	 	b=0;
	}

	if (Trainning>=90&&Trainning<=100) {
		printf("Trainning: A+\n");
		m=4;
	}
	else if (Trainning>=85&&Trainning<=90) {
		printf("Trainning: A\n");
		m=3.7;
	}
	else if (Trainning>=80&&Trainning<=85) {
		printf("Trainning: B+\n");
		m=3.3;
	}
	else if (Trainning>=75&&Trainning<=80) {
		printf("Trainning: B\n");
		m=3;
	}
	else if (Trainning>=70&&Trainning<=75) {
		printf("Trainning: C+\n");
		m=2.7;
	}
	else if (Trainning>=65&&Trainning<=70) {
		printf("Trainning: C\n");
		m=2.4;
	}
	else if (Trainning>=60&&Trainning<=65) {
		printf("Trainning: D+\n");
		m=2.2;
	}
	else if (Trainning>=50&&Trainning<=60) {
		printf("Trainning: D\n");
		m=2;
	}
	else if (Trainning<=50) { 
		printf("Trainning: F\n");
	 	m=0;
	}

	if (Introduction>=90&&Introduction<=100) {
		printf("Introduction: A+\n");
		n=4;
	}
	else if (Introduction>=85&&Introduction<=90) {
		printf("Introduction: A\n");
		n=3.7;
	}
	else if (Introduction>=80&&Introduction<=85) {
		printf("Introduction: B+\n");
		n=3.3;
	}
	else if (Introduction>=75&&Introduction<=80) {
		printf("Introduction: B\n");
		n=3;
	}
	else if (Introduction>=70&&Introduction<=75) {
		printf("Introduction: C+\n");
		n=2.7;
	}
	else if (Introduction>=65&&Introduction<=70) {
		printf("Introduction: C\n");
		n=2.4;
	}
	else if (Introduction>=60&&Introduction<=65) {
		printf("Introduction: D+\n");
		n=2.2;
	}
	else if (Introduction>=50&&Introduction<=60) {
		printf("Introduction: D\n");
		n=2;
	}
	else if (Introduction<=50) { 
		printf("Introduction: F\n");
	 	n=0;
	}

	// Then we do the Calculations! 
	sum=((z*P)+(x*C)+(c*E)+(v*D)+(b*M)+(n*I)+(m*T));
	GPA=(sum)/count1;
	total=z+x+c+v+b+n+m;

	if (Fail>=1) printf("You have failed %d Subjects\n",Fail);
	printf("Your Total GPA is %d\nYour Sum is %.1f\nYour GPA is %.1f\n",total,sum,GPA);

	// Then we see The GPA! 
	if (Fail>=3) printf("\nYour GPA is  F");
	else if (GPA==4) printf("Your GPA is A+!\n");
	else if (GPA>=3.7) printf("Your GPA is A!\n");
	else if (GPA>=3.3) printf("Your GPA is B+\n");
	else if (GPA>=3) printf("Your GPA is B\n");
	else if (GPA>=2.7) printf("Your GPA is C+\n");
	else if (GPA>=2.4) printf("Your GPA is C\n");
	else if (GPA>=2.2) printf("Your GPA is D+\n");
	else if (GPA>=2) printf("Your GPA is D\n");
	else if (GPA<2) printf("Your GPA is F!\n");
	else 
	{ 
		printf("Something Went Wrong");
	}
	
	return 0;
}
