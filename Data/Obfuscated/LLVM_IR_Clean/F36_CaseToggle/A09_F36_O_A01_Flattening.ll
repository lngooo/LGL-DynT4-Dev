define dso_local void @mpEm6(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp ne i32 %8, -1
  br i1 %9, label %10, label %78
10:
  %11 = load i32, i32* %4
  switch i32 %11, label %77 [
    i32 0, label %12
    i32 1, label %22
    i32 2, label %74
  ]
12:
  %13 = load i8*, i8** %2
  %14 = load i32, i32* %3
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds i8, i8* %13, i64 %15
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = icmp eq i32 %18, 0
  %20 = zext i1 %19 to i64
  %21 = select i1 %19, i32 -1, i32 1
  store i32 %21, i32* %4
  br label %77
22:
  %23 = load i8*, i8** %2
  %24 = load i32, i32* %3
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = icmp sge i32 %28, 97
  br i1 %29, label %30, label %47
30:
  %31 = load i8*, i8** %2
  %32 = load i32, i32* %3
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = icmp sle i32 %36, 122
  br i1 %37, label %38, label %47
38:
  %39 = load i8*, i8** %2
  %40 = load i32, i32* %3
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %39, i64 %41
  %43 = load i8, i8* %42
  %44 = sext i8 %43 to i32
  %45 = sub nsw i32 %44, 32
  %46 = trunc i32 %45 to i8
  store i8 %46, i8* %42
  br label %73
47:
  %48 = load i8*, i8** %2
  %49 = load i32, i32* %3
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i8, i8* %48, i64 %50
  %52 = load i8, i8* %51
  %53 = sext i8 %52 to i32
  %54 = icmp sge i32 %53, 65
  br i1 %54, label %55, label %72
55:
  %56 = load i8*, i8** %2
  %57 = load i32, i32* %3
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i8, i8* %56, i64 %58
  %60 = load i8, i8* %59
  %61 = sext i8 %60 to i32
  %62 = icmp sle i32 %61, 90
  br i1 %62, label %63, label %72
63:
  %64 = load i8*, i8** %2
  %65 = load i32, i32* %3
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i8, i8* %64, i64 %66
  %68 = load i8, i8* %67
  %69 = sext i8 %68 to i32
  %70 = add nsw i32 %69, 32
  %71 = trunc i32 %70 to i8
  store i8 %71, i8* %67
  br label %72
72:
  br label %73
73:
  store i32 2, i32* %4
  br label %77
74:
  %75 = load i32, i32* %3
  %76 = add nsw i32 %75, 1
  store i32 %76, i32* %3
  store i32 0, i32* %4
  br label %77
77:
  br label %7
78:
  ret void
}
