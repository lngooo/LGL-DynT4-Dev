define dso_local void @FK(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 5, i32* %3
  store i32 10, i32* %4
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i8, i8* %8
  %10 = icmp ne i8 %9, 0
  br i1 %10, label %11, label %46
11:
  %12 = load i32, i32* %3
  %13 = load i32, i32* %4
  %14 = add nsw i32 %12, %13
  %15 = icmp eq i32 %14, 15
  br i1 %15, label %16, label %43
16:
  %17 = load i8*, i8** %2
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = icmp sge i32 %19, 97
  br i1 %20, label %21, label %26
21:
  %22 = load i8*, i8** %2
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = icmp sle i32 %24, 122
  br i1 %25, label %36, label %26
26:
  %27 = load i8*, i8** %2
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = icmp sge i32 %29, 65
  br i1 %30, label %31, label %42
31:
  %32 = load i8*, i8** %2
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = icmp sle i32 %34, 90
  br i1 %35, label %36, label %42
36:
  %37 = load i8*, i8** %2
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = xor i32 %39, 32
  %41 = trunc i32 %40 to i8
  store i8 %41, i8* %37
  br label %42
42:
  br label %43
43:
  %44 = load i8*, i8** %2
  %45 = getelementptr inbounds i8, i8* %44, i32 1
  store i8* %45, i8** %2
  br label %7
46:
  ret void
}
