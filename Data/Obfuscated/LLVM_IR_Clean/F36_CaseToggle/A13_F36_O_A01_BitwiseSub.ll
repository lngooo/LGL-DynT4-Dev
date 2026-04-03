define dso_local void @a9(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  br label %3
3:
  %4 = load i8*, i8** %2
  %5 = load i8, i8* %4
  %6 = icmp ne i8 %5, 0
  br i1 %6, label %7, label %46
7:
  %8 = load i8*, i8** %2
  %9 = load i8, i8* %8
  %10 = sext i8 %9 to i32
  %11 = icmp sge i32 %10, 97
  br i1 %11, label %12, label %24
12:
  %13 = load i8*, i8** %2
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = icmp sle i32 %15, 122
  br i1 %16, label %17, label %24
17:
  %18 = load i8*, i8** %2
  %19 = load i8, i8* %18
  %20 = sext i8 %19 to i32
  %21 = add nsw i32 %20, -32
  %22 = trunc i32 %21 to i8
  %23 = load i8*, i8** %2
  store i8 %22, i8* %23
  br label %42
24:
  %25 = load i8*, i8** %2
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = icmp sge i32 %27, 65
  br i1 %28, label %29, label %41
29:
  %30 = load i8*, i8** %2
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = icmp sle i32 %32, 90
  br i1 %33, label %34, label %41
34:
  %35 = load i8*, i8** %2
  %36 = load i8, i8* %35
  %37 = sext i8 %36 to i32
  %38 = add nsw i32 %37, 32
  %39 = trunc i32 %38 to i8
  %40 = load i8*, i8** %2
  store i8 %39, i8* %40
  br label %41
41:
  br label %42
42:
  br label %43
43:
  %44 = load i8*, i8** %2
  %45 = getelementptr inbounds i8, i8* %44, i32 1
  store i8* %45, i8** %2
  br label %3
46:
  ret void
}
