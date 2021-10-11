class Main {
    public static void wait(int ms)
    {
        try
        {
            Thread.sleep(ms);
        }
        catch(InterruptedException ex)
        {
            Thread.currentThread().interrupt();
        }
    }

    public static void main(String[] args){
        System.out.println("Мне не скинули ножки...");
        wait(500);
        for(int i=1000; i > 0; i-=7){
            System.out.printf("%s - 7 = %s\n", i, i-7);
            wait(30);
        }
    }
}
