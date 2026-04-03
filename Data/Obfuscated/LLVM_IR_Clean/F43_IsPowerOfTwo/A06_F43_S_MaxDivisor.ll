define dso_local i32 @Bpj(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 -2147483648, i32* %3
  %5 = load i32, i32* %2
  %6 = icmp ugt i32 %5, 0
  br i1 %6, label %7, label %12
7:
  %8 = load i32, i32* %3
  %9 = load i32, i32* %2
  %10 = urem i32 %8, %9
  %11 = icmp eq i32 %10, 0
  br label %12
12:
  %13 = phi i1 [ false, %1 ], [ %11, %7 ]
  %14 = zext i1 %13 to i32
  ret i32 %14
}
