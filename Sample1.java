class Sample1 {
    int n;
    public Sample1(int nn) {
        n = nn;
    }

    public static native int nativeMultiply(int a, int b);
    public int javaMultiply(int a, int b) {
        System.out.println("javaMultiply(" + a + "," + b + ")=" + (a*b));
        return n*a*b;
    }
    public static void main(String[] args) {
        System.loadLibrary("Sample1");
        System.out.println("nativeMultiply(3,5)=" + nativeMultiply(3,5));
    }
}
