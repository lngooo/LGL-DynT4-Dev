define dso_local i32 @VowelCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i8
  %5 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i8, i8* %8
  %10 = icmp ne i8 %9, 0
  br i1 %10, label %11, label %53
11:
  %12 = load i8*, i8** %2
  %13 = load i8, i8* %12
  store i8 %13, i8* %4
  %14 = load i8, i8* %4
  %15 = sext i8 %14 to i32
  %16 = icmp sge i32 %15, 65
  br i1 %16, label %17, label %49
17:
  %18 = load i8, i8* %4
  %19 = sext i8 %18 to i32
  %20 = icmp sle i32 %19, 122
  br i1 %20, label %21, label %49
21:
  %22 = load i8, i8* %4
  %23 = sext i8 %22 to i32
  %24 = or i32 %23, 32
  %25 = trunc i32 %24 to i8
  store i8 %25, i8* %5
  %26 = load i8, i8* %5
  %27 = sext i8 %26 to i32
  %28 = icmp eq i32 %27, 97
  br i1 %28, label %45, label %29
29:
  %30 = load i8, i8* %5
  %31 = sext i8 %30 to i32
  %32 = icmp eq i32 %31, 101
  br i1 %32, label %45, label %33
33:
  %34 = load i8, i8* %5
  %35 = sext i8 %34 to i32
  %36 = icmp eq i32 %35, 105
  br i1 %36, label %45, label %37
37:
  %38 = load i8, i8* %5
  %39 = sext i8 %38 to i32
  %40 = icmp eq i32 %39, 111
  br i1 %40, label %45, label %41
41:
  %42 = load i8, i8* %5
  %43 = sext i8 %42 to i32
  %44 = icmp eq i32 %43, 117
  br i1 %44, label %45, label %48
45:
  %46 = load i32, i32* %3
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %3
  br label %48
48:
  br label %49
49:
  br label %50
50:
  %51 = load i8*, i8** %2
  %52 = getelementptr inbounds i8, i8* %51, i32 1
  store i8* %52, i8** %2
  br label %7
53:
  %54 = load i32, i32* %3
  ret i32 %54
}
