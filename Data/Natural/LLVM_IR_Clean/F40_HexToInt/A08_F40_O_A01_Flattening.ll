define dso_local i32 @HexToInt(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 1, i32* %4
  br label %9
9:
  %10 = load i32, i32* %4
  %11 = icmp ne i32 %10, 0
  br i1 %11, label %12, label %51
12:
  %13 = load i32, i32* %4
  switch i32 %13, label %50 [
    i32 1, label %14
    i32 2, label %21
  ]
14:
  %15 = load i8*, i8** %2
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %19, label %18
18:
  store i32 0, i32* %4
  br label %20
19:
  store i32 2, i32* %4
  br label %20
20:
  br label %50
21:
  store i32 0, i32* %5
  %23 = load i8*, i8** %2
  %24 = load i8, i8* %23
  store i8 %24, i8* %6
  %25 = load i8, i8* %6
  %26 = sext i8 %25 to i32
  %27 = icmp sge i32 %26, 48
  br i1 %27, label %28, label %36
28:
  %29 = load i8, i8* %6
  %30 = sext i8 %29 to i32
  %31 = icmp sle i32 %30, 57
  br i1 %31, label %32, label %36
32:
  %33 = load i8, i8* %6
  %34 = sext i8 %33 to i32
  %35 = sub nsw i32 %34, 48
  store i32 %35, i32* %5
  br label %42
36:
  %37 = load i8, i8* %6
  %38 = sext i8 %37 to i32
  %39 = or i32 %38, 32
  %40 = sub nsw i32 %39, 97
  %41 = add nsw i32 %40, 10
  store i32 %41, i32* %5
  br label %42
42:
  %43 = load i32, i32* %3
  %44 = mul nsw i32 %43, 16
  %45 = load i32, i32* %5
  %46 = add nsw i32 %44, %45
  store i32 %46, i32* %3
  %47 = load i8*, i8** %2
  %48 = getelementptr inbounds i8, i8* %47, i32 1
  store i8* %48, i8** %2
  store i32 1, i32* %4
  br label %50
50:
  br label %9
51:
  %52 = load i32, i32* %3
  ret i32 %52
}
