class Sample1 {
    public static native int nativeMultiply(int a, int b);
    public static int javaMultiply(int a, int b) {
        System.out.println("javaMultiply(" + a + "," + b + ")=" + (a*b));
        return a*b;
    }
    public static void main(String[] args) {
        System.loadLibrary("Sample1");
        System.out.println("nativeMultiply(3,5)=" + nativeMultiply(3,5));
    }
}
