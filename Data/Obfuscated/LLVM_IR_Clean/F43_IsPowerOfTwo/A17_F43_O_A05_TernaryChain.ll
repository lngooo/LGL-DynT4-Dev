define dso_local i32 @O(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = icmp eq i32 %3, 0
  br i1 %4, label %5, label %6
5:
  br label %23
6:
  %7 = load i32, i32* %2
  %8 = icmp eq i32 %7, 1
  br i1 %8, label %9, label %10
9:
  br label %21
10:
  %11 = load i32, i32* %2
  %12 = urem i32 %11, 2
  %13 = icmp ne i32 %12, 0
  br i1 %13, label %14, label %15
14:
  br label %19
15:
  %16 = load i32, i32* %2
  %17 = lshr i32 %16, 1
  %18 = call i32 @O(i32 %17)
  br label %19
19:
  %20 = phi i32 [ 0, %14 ], [ %18, %15 ]
  br label %21
21:
  %22 = phi i32 [ 1, %9 ], [ %20, %19 ]
  br label %23
23:
  %24 = phi i32 [ 0, %5 ], [ %22, %21 ]
  ret i32 %24
}
