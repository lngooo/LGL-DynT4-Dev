define dso_local void @JjIn9(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  store i8* %0, i8** %2
  %5 = load i8*, i8** %2
  store i8* %5, i8** %3
  br label %6
6:
  %7 = load i8*, i8** %3
  %8 = load i8, i8* %7
  %9 = zext i8 %8 to i32
  %10 = icmp ne i32 %9, 0
  br i1 %10, label %11, label %49
11:
  %12 = load i8*, i8** %3
  %13 = load i8, i8* %12
  %14 = zext i8 %13 to i32
  %15 = icmp sge i32 %14, 97
  br i1 %15, label %16, label %28
16:
  %17 = load i8*, i8** %3
  %18 = load i8, i8* %17
  %19 = zext i8 %18 to i32
  %20 = icmp sle i32 %19, 122
  br i1 %20, label %21, label %28
21:
  %22 = load i8*, i8** %3
  %23 = load i8, i8* %22
  %24 = zext i8 %23 to i32
  %25 = sub nsw i32 %24, 32
  %26 = trunc i32 %25 to i8
  %27 = load i8*, i8** %3
  store i8 %26, i8* %27
  br label %46
28:
  %29 = load i8*, i8** %3
  %30 = load i8, i8* %29
  %31 = zext i8 %30 to i32
  %32 = icmp sge i32 %31, 65
  br i1 %32, label %33, label %45
33:
  %34 = load i8*, i8** %3
  %35 = load i8, i8* %34
  %36 = zext i8 %35 to i32
  %37 = icmp sle i32 %36, 90
  br i1 %37, label %38, label %45
38:
  %39 = load i8*, i8** %3
  %40 = load i8, i8* %39
  %41 = zext i8 %40 to i32
  %42 = add nsw i32 %41, 32
  %43 = trunc i32 %42 to i8
  %44 = load i8*, i8** %3
  store i8 %43, i8* %44
  br label %45
45:
  br label %46
46:
  %47 = load i8*, i8** %3
  %48 = getelementptr inbounds i8, i8* %47, i32 1
  store i8* %48, i8** %3
  br label %6
49:
  ret void
}
