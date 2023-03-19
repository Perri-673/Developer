class pattern_2{
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        for(int i=0;i<=7;i++){
            for(int j=i+1;j<=7;j++){
                System.out.print(j);}
                if(i!=7)
                    System.out.print("\n");}
        for(int i=5;i>=0;i--){
            for(int j=i+1;j<=7;j++){
                System.out.print(j);
            }
            System.out.print("\n");}
    }
}