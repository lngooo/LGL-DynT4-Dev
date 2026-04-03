define dso_local i32 @GCD(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %3
  %6 = call i32 @abs(i32 %5)
  store i32 %6, i32* %3
  %7 = load i32, i32* %4
  %8 = call i32 @abs(i32 %7)
  store i32 %8, i32* %4
  br label %9
9:
  %10 = load i32, i32* %3
  %11 = load i32, i32* %4
  %12 = icmp ne i32 %10, %11
  br i1 %12, label %13, label %39
13:
  br label %14
14:
  %15 = load i32, i32* %3
  %16 = load i32, i32* %4
  %17 = icmp sgt i32 %15, %16
  br i1 %17, label %18, label %22
18:
  %19 = load i32, i32* %4
  %20 = load i32, i32* %3
  %21 = sub nsw i32 %20, %19
  store i32 %21, i32* %3
  br label %14
22:
  br label %23
23:
  %24 = load i32, i32* %4
  %25 = load i32, i32* %3
  %26 = icmp sgt i32 %24, %25
  br i1 %26, label %27, label %31
27:
  %28 = load i32, i32* %3
  %29 = load i32, i32* %4
  %30 = sub nsw i32 %29, %28
  store i32 %30, i32* %4
  br label %23
31:
  %32 = load i32, i32* %3
  %33 = icmp eq i32 %32, 0
  br i1 %33, label %37, label %34
34:
  %35 = load i32, i32* %4
  %36 = icmp eq i32 %35, 0
  br i1 %36, label %37, label %38
37:
  br label %39
38:
  br label %9
39:
  %40 = load i32, i32* %3
  %41 = icmp eq i32 %40, 0
  br i1 %41, label %42, label %44
42:
  %43 = load i32, i32* %4
  br label %46
44:
  %45 = load i32, i32* %3
  br label %46
46:
  %47 = phi i32 [ %43, %42 ], [ %45, %44 ]
  ret i32 %47
}
declare i32 @abs(i32)
