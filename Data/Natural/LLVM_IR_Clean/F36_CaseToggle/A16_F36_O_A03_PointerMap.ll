define dso_local void @CaseToggle(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [256 x i8]
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i8*
  store i8* %0, i8** %2
  store i32 0, i32* %4
  br label %10
10:
  %11 = load i32, i32* %4
  %12 = icmp slt i32 %11, 256
  br i1 %12, label %15, label %13
13:
  br label %24
15:
  %16 = load i32, i32* %4
  %17 = trunc i32 %16 to i8
  %18 = load i32, i32* %4
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds [256 x i8], [256 x i8]* %3, i64 0, i64 %19
  store i8 %17, i8* %20
  br label %21
21:
  %22 = load i32, i32* %4
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %4
  br label %10
24:
  store i32 97, i32* %5
  br label %26
26:
  %27 = load i32, i32* %5
  %28 = icmp sle i32 %27, 122
  br i1 %28, label %31, label %29
29:
  br label %41
31:
  %32 = load i32, i32* %5
  %33 = sub nsw i32 %32, 32
  %34 = trunc i32 %33 to i8
  %35 = load i32, i32* %5
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds [256 x i8], [256 x i8]* %3, i64 0, i64 %36
  store i8 %34, i8* %37
  br label %38
38:
  %39 = load i32, i32* %5
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %5
  br label %26
41:
  store i32 65, i32* %6
  br label %43
43:
  %44 = load i32, i32* %6
  %45 = icmp sle i32 %44, 90
  br i1 %45, label %48, label %46
46:
  br label %58
48:
  %49 = load i32, i32* %6
  %50 = add nsw i32 %49, 32
  %51 = trunc i32 %50 to i8
  %52 = load i32, i32* %6
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds [256 x i8], [256 x i8]* %3, i64 0, i64 %53
  store i8 %51, i8* %54
  br label %55
55:
  %56 = load i32, i32* %6
  %57 = add nsw i32 %56, 1
  store i32 %57, i32* %6
  br label %43
58:
  %60 = load i8*, i8** %2
  store i8* %60, i8** %7
  br label %61
61:
  %62 = load i8*, i8** %7
  %63 = load i8, i8* %62
  %64 = icmp ne i8 %63, 0
  br i1 %64, label %65, label %76
65:
  %66 = getelementptr inbounds [256 x i8], [256 x i8]* %3, i64 0, i64 0
  %67 = load i8*, i8** %7
  %68 = load i8, i8* %67
  %69 = zext i8 %68 to i32
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i8, i8* %66, i64 %70
  %72 = load i8, i8* %71
  %73 = load i8*, i8** %7
  store i8 %72, i8* %73
  %74 = load i8*, i8** %7
  %75 = getelementptr inbounds i8, i8* %74, i32 1
  store i8* %75, i8** %7
  br label %61
76:
  ret void
}
