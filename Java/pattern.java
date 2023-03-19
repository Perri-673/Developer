class pattern{
    public static void main(String[] args){
        System.out.println("Hello, World!");
	int l=0;
        for(int i=1;i<=15;i++){
            for(int j=1;j<=i;j++){
                System.out.print(j+" ");
		if(j==i)
		l=j;}
            for(int k=l-1;k>=1;k--){
                System.out.print(k+" ");}
            System.out.print("\n");}}}