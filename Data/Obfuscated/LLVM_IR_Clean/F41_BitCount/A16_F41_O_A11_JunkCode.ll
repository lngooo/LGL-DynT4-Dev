@.str = constant [3 x i8] c"%u\00"
define dso_local i32 @MpBr(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 703710, i32* %4
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = icmp slt i32 %10, 32
  br i1 %11, label %14, label %12
12:
  br label %31
14:
  %15 = load i32, i32* %4
  %16 = mul i32 %15, 3
  %17 = load i32, i32* %5
  %18 = add i32 %16, %17
  store i32 %18, i32* %4
  %19 = load i32, i32* %2
  %20 = urem i32 %19, 2
  %21 = icmp ne i32 %20, 0
  br i1 %21, label %22, label %25
22:
  %23 = load i32, i32* %3
  %24 = add nsw i32 %23, 1
  store i32 %24, i32* %3
  br label %25
25:
  %26 = load i32, i32* %2
  %27 = udiv i32 %26, 2
  store i32 %27, i32* %2
  br label %28
28:
  %29 = load i32, i32* %5
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %5
  br label %9
31:
  %32 = load i32, i32* %4
  %33 = icmp eq i32 %32, 0
  br i1 %33, label %34, label %37
34:
  %35 = load i32, i32* %4
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %35)
  br label %37
37:
  %38 = load i32, i32* %3
  ret i32 %38
}
declare i32 @printf(i8*, ...)
