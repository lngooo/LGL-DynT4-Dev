define dso_local i32 @I4(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i8*, i8** %2
  %11 = load i8, i8* %10
  %12 = icmp ne i8 %11, 0
  br i1 %12, label %13, label %37
13:
  %14 = load i8*, i8** %2
  %15 = load i8, i8* %14
  %16 = sext i8 %15 to i32
  %17 = call i32 @isspace(i32 %16)
  %18 = icmp ne i32 %17, 0
  br i1 %18, label %19, label %20
19:
  store i32 0, i32* %5
  br label %34
20:
  %21 = load i32, i32* %5
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %23, label %33
23:
  store i32 1, i32* %5
  %24 = load i32, i32* %3
  %25 = icmp slt i32 %24, 100
  br i1 %25, label %26, label %29
26:
  %27 = load i32, i32* %3
  %28 = add nsw i32 %27, 1
  store i32 %28, i32* %3
  br label %32
29:
  %30 = load i32, i32* %4
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %4
  br label %32
32:
  br label %33
33:
  br label %34
34:
  %35 = load i8*, i8** %2
  %36 = getelementptr inbounds i8, i8* %35, i32 1
  store i8* %36, i8** %2
  br label %9
37:
  %38 = load i32, i32* %3
  %39 = load i32, i32* %4
  %40 = add nsw i32 %38, %39
  ret i32 %40
}
declare i32 @isspace(i32)
