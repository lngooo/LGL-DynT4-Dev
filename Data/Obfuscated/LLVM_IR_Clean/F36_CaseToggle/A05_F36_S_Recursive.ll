define dso_local void @Hm(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = load i8, i8* %3
  %5 = icmp ne i8 %4, 0
  br i1 %5, label %7, label %6
6:
  br label %43
7:
  %8 = load i8*, i8** %2
  %9 = load i8, i8* %8
  %10 = sext i8 %9 to i32
  %11 = icmp sge i32 %10, 97
  br i1 %11, label %12, label %23
12:
  %13 = load i8*, i8** %2
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = icmp sle i32 %15, 122
  br i1 %16, label %17, label %23
17:
  %18 = load i8*, i8** %2
  %19 = load i8, i8* %18
  %20 = sext i8 %19 to i32
  %21 = sub nsw i32 %20, 32
  %22 = trunc i32 %21 to i8
  store i8 %22, i8* %18
  br label %40
23:
  %24 = load i8*, i8** %2
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = icmp sge i32 %26, 65
  br i1 %27, label %28, label %39
28:
  %29 = load i8*, i8** %2
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = icmp sle i32 %31, 90
  br i1 %32, label %33, label %39
33:
  %34 = load i8*, i8** %2
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = add nsw i32 %36, 32
  %38 = trunc i32 %37 to i8
  store i8 %38, i8* %34
  br label %39
39:
  br label %40
40:
  %41 = load i8*, i8** %2
  %42 = getelementptr inbounds i8, i8* %41, i64 1
  call void @Hm(i8* %42)
  br label %43
43:
  ret void
}
