class Sample1 {
    public static native int multiply(int a, int b);
    public static void main(String[] args) {
        System.loadLibrary("Sample1");
        System.out.println("multiply(3,5)=" + multiply(3,5));
    }
}
