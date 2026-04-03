define dso_local void @TrimSpace(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca i8*
  store i8* %0, i8** %2
  %6 = load i8*, i8** %2
  store i8* %6, i8** %3
  %8 = load i8*, i8** %2
  store i8* %8, i8** %4
  br label %9
9:
  %10 = load i8*, i8** %3
  %11 = load i8, i8* %10
  %12 = icmp ne i8 %11, 0
  br i1 %12, label %14, label %13
13:
  br label %39
14:
  %15 = load i8*, i8** %3
  %16 = load i8, i8* %15
  %17 = sext i8 %16 to i32
  %18 = icmp eq i32 %17, 32
  br i1 %18, label %29, label %19
19:
  %20 = load i8*, i8** %3
  %21 = load i8, i8* %20
  %22 = sext i8 %21 to i32
  %23 = icmp sge i32 %22, 9
  br i1 %23, label %24, label %30
24:
  %25 = load i8*, i8** %3
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = icmp sle i32 %27, 13
  br i1 %28, label %29, label %30
29:
  br label %36
30:
  %31 = load i8*, i8** %3
  %32 = load i8, i8* %31
  %33 = load i8*, i8** %4
  store i8 %32, i8* %33
  %34 = load i8*, i8** %4
  %35 = getelementptr inbounds i8, i8* %34, i32 1
  store i8* %35, i8** %4
  br label %36
36:
  %37 = load i8*, i8** %3
  %38 = getelementptr inbounds i8, i8* %37, i32 1
  store i8* %38, i8** %3
  br label %9
39:
  %40 = load i8*, i8** %4
  store i8 0, i8* %40
  ret void
}
