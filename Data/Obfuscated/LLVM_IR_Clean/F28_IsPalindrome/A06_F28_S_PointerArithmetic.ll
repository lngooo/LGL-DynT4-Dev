define dso_local i32 @M(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  store i8* %0, i8** %3
  %7 = load i8*, i8** %3
  store i8* %7, i8** %4
  br label %8
8:
  %9 = load i8*, i8** %4
  %10 = load i8, i8* %9
  %11 = icmp ne i8 %10, 0
  br i1 %11, label %12, label %15
12:
  %13 = load i8*, i8** %4
  %14 = getelementptr inbounds i8, i8* %13, i32 1
  store i8* %14, i8** %4
  br label %8
15:
  %16 = load i8*, i8** %4
  %17 = getelementptr inbounds i8, i8* %16, i32 -1
  store i8* %17, i8** %4
  br label %18
18:
  %19 = load i8*, i8** %3
  %20 = load i8*, i8** %4
  %21 = icmp ult i8* %19, %20
  br i1 %21, label %22, label %36
22:
  %23 = load i8*, i8** %3
  %24 = load i8, i8* %23
  %25 = sext i8 %24 to i32
  %26 = load i8*, i8** %4
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = icmp ne i32 %25, %28
  br i1 %29, label %30, label %31
30:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %37
31:
  %32 = load i8*, i8** %3
  %33 = getelementptr inbounds i8, i8* %32, i32 1
  store i8* %33, i8** %3
  %34 = load i8*, i8** %4
  %35 = getelementptr inbounds i8, i8* %34, i32 -1
  store i8* %35, i8** %4
  br label %18
36:
  store i32 1, i32* %2
  store i32 1, i32* %5
  br label %37
37:
  %39 = load i32, i32* %2
  ret i32 %39
}
