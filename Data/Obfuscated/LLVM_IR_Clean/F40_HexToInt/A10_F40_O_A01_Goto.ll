define dso_local i32 @gYNX(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %11, label %10
10:
  br label %40
11:
  store i32 0, i32* %4
  %12 = load i8*, i8** %2
  %13 = load i8, i8* %12
  %14 = sext i8 %13 to i32
  %15 = icmp sge i32 %14, 48
  br i1 %15, label %16, label %26
16:
  %17 = load i8*, i8** %2
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = icmp sle i32 %19, 57
  br i1 %20, label %21, label %26
21:
  %22 = load i8*, i8** %2
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = sub nsw i32 %24, 48
  store i32 %25, i32* %4
  br label %33
26:
  %27 = load i8*, i8** %2
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = or i32 %29, 32
  %31 = sub nsw i32 %30, 97
  %32 = add nsw i32 %31, 10
  store i32 %32, i32* %4
  br label %33
33:
  %34 = load i32, i32* %3
  %35 = mul nsw i32 %34, 16
  %36 = load i32, i32* %4
  %37 = add nsw i32 %35, %36
  store i32 %37, i32* %3
  %38 = load i8*, i8** %2
  %39 = getelementptr inbounds i8, i8* %38, i32 1
  store i8* %39, i8** %2
  br label %6
40:
  %41 = load i32, i32* %3
  ret i32 %41
}
