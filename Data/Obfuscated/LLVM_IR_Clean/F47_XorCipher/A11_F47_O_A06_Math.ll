define dso_local void @S(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca double
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i8*, i8** %4
  %11 = load i32, i32* %5
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %5
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %5
  br label %9
19:
  store i32 0, i32* %6
  br label %21
21:
  %22 = load i8*, i8** %3
  %23 = load i32, i32* %6
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = icmp ne i8 %26, 0
  br i1 %27, label %30, label %28
28:
  br label %57
30:
  %32 = call double @sin(double 0.000000e+00)
  store double %32, double* %7
  %33 = load i8*, i8** %3
  %34 = load i32, i32* %6
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %33, i64 %35
  %37 = load i8, i8* %36
  %38 = zext i8 %37 to i32
  %39 = load i8*, i8** %4
  %40 = load i32, i32* %6
  %41 = load i32, i32* %5
  %42 = srem i32 %40, %41
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i8, i8* %39, i64 %43
  %45 = load i8, i8* %44
  %46 = zext i8 %45 to i32
  %47 = xor i32 %38, %46
  %48 = trunc i32 %47 to i8
  %49 = load i8*, i8** %3
  %50 = load i32, i32* %6
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  store i8 %48, i8* %52
  br label %54
54:
  %55 = load i32, i32* %6
  %56 = add nsw i32 %55, 1
  store i32 %56, i32* %6
  br label %21
57:
  ret void
}
declare double @sin(double)
