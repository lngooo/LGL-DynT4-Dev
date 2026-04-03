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
  br i1 %12, label %13, label %42
13:
  %14 = load i8*, i8** %3
  %15 = load i8, i8* %14
  %16 = sext i8 %15 to i32
  %17 = icmp ne i32 %16, 32
  br i1 %17, label %18, label %39
18:
  %19 = load i8*, i8** %3
  %20 = load i8, i8* %19
  %21 = sext i8 %20 to i32
  %22 = icmp ne i32 %21, 9
  br i1 %22, label %23, label %39
23:
  %24 = load i8*, i8** %3
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = icmp ne i32 %26, 10
  br i1 %27, label %28, label %39
28:
  %29 = load i8*, i8** %3
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = icmp ne i32 %31, 13
  br i1 %32, label %33, label %39
33:
  %34 = load i8*, i8** %3
  %35 = load i8, i8* %34
  %36 = load i8*, i8** %4
  store i8 %35, i8* %36
  %37 = load i8*, i8** %4
  %38 = getelementptr inbounds i8, i8* %37, i32 1
  store i8* %38, i8** %4
  br label %39
39:
  %40 = load i8*, i8** %3
  %41 = getelementptr inbounds i8, i8* %40, i32 1
  store i8* %41, i8** %3
  br label %9
42:
  %43 = load i8*, i8** %4
  store i8 0, i8* %43
  ret void
}
