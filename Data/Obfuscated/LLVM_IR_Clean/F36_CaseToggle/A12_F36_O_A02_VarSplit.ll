define dso_local void @VZ(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8
  store i8* %0, i8** %2
  store i32 16, i32* %3
  store i32 16, i32* %4
  br label %8
8:
  %9 = load i8*, i8** %2
  %10 = load i8, i8* %9
  %11 = icmp ne i8 %10, 0
  br i1 %11, label %12, label %42
12:
  %13 = load i8*, i8** %2
  %14 = load i8, i8* %13
  store i8 %14, i8* %5
  %15 = load i8, i8* %5
  %16 = sext i8 %15 to i32
  %17 = icmp sge i32 %16, 97
  br i1 %17, label %18, label %22
18:
  %19 = load i8, i8* %5
  %20 = sext i8 %19 to i32
  %21 = icmp sle i32 %20, 122
  br i1 %21, label %30, label %22
22:
  %23 = load i8, i8* %5
  %24 = sext i8 %23 to i32
  %25 = icmp sge i32 %24, 65
  br i1 %25, label %26, label %39
26:
  %27 = load i8, i8* %5
  %28 = sext i8 %27 to i32
  %29 = icmp sle i32 %28, 90
  br i1 %29, label %30, label %39
30:
  %31 = load i8, i8* %5
  %32 = sext i8 %31 to i32
  %33 = load i32, i32* %3
  %34 = load i32, i32* %4
  %35 = add nsw i32 %33, %34
  %36 = xor i32 %32, %35
  %37 = trunc i32 %36 to i8
  %38 = load i8*, i8** %2
  store i8 %37, i8* %38
  br label %39
39:
  %40 = load i8*, i8** %2
  %41 = getelementptr inbounds i8, i8* %40, i32 1
  store i8* %41, i8** %2
  br label %8
42:
  ret void
}
