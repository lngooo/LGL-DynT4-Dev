define dso_local i32 @JA(i8* %0) {
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
  %10 = load i32, i32* %5
  %11 = icmp slt i32 %10, 1
  br i1 %11, label %14, label %12
12:
  br label %44
14:
  br label %15
15:
  %16 = load i8*, i8** %2
  %17 = load i8, i8* %16
  %18 = icmp ne i8 %17, 0
  br i1 %18, label %19, label %40
19:
  %20 = load i8*, i8** %2
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i32
  %23 = call i32 @isspace(i32 %22)
  %24 = icmp ne i32 %23, 0
  br i1 %24, label %25, label %26
25:
  store i32 0, i32* %4
  br label %33
26:
  %27 = load i32, i32* %4
  %28 = icmp eq i32 %27, 0
  br i1 %28, label %29, label %32
29:
  store i32 1, i32* %4
  %30 = load i32, i32* %3
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %3
  br label %32
32:
  br label %33
33:
  %34 = load i8*, i8** %2
  %35 = getelementptr inbounds i8, i8* %34, i32 1
  store i8* %35, i8** %2
  %36 = load i32, i32* %5
  %37 = icmp sgt i32 %36, 10
  br i1 %37, label %38, label %39
38:
  br label %40
39:
  br label %15
40:
  br label %41
41:
  %42 = load i32, i32* %5
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %5
  br label %9
44:
  %45 = load i32, i32* %3
  ret i32 %45
}
declare i32 @isspace(i32)
