define dso_local i32 @VowelCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  store i32 1, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = icmp ne i32 %11, 0
  br i1 %12, label %13, label %78
13:
  %14 = load i32, i32* %5
  switch i32 %14, label %77 [
    i32 1, label %15
    i32 2, label %26
  ]
15:
  %16 = load i8*, i8** %2
  %17 = load i32, i32* %4
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i8, i8* %16, i64 %18
  %20 = load i8, i8* %19
  %21 = sext i8 %20 to i32
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %23, label %24
23:
  store i32 0, i32* %5
  br label %25
24:
  store i32 2, i32* %5
  br label %25
25:
  br label %77
26:
  %27 = load i8*, i8** %2
  %28 = load i32, i32* %4
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  store i8 %31, i8* %6
  %32 = load i8, i8* %6
  %33 = sext i8 %32 to i32
  %34 = icmp eq i32 %33, 97
  br i1 %34, label %71, label %35
35:
  %36 = load i8, i8* %6
  %37 = sext i8 %36 to i32
  %38 = icmp eq i32 %37, 101
  br i1 %38, label %71, label %39
39:
  %40 = load i8, i8* %6
  %41 = sext i8 %40 to i32
  %42 = icmp eq i32 %41, 105
  br i1 %42, label %71, label %43
43:
  %44 = load i8, i8* %6
  %45 = sext i8 %44 to i32
  %46 = icmp eq i32 %45, 111
  br i1 %46, label %71, label %47
47:
  %48 = load i8, i8* %6
  %49 = sext i8 %48 to i32
  %50 = icmp eq i32 %49, 117
  br i1 %50, label %71, label %51
51:
  %52 = load i8, i8* %6
  %53 = sext i8 %52 to i32
  %54 = icmp eq i32 %53, 65
  br i1 %54, label %71, label %55
55:
  %56 = load i8, i8* %6
  %57 = sext i8 %56 to i32
  %58 = icmp eq i32 %57, 69
  br i1 %58, label %71, label %59
59:
  %60 = load i8, i8* %6
  %61 = sext i8 %60 to i32
  %62 = icmp eq i32 %61, 73
  br i1 %62, label %71, label %63
63:
  %64 = load i8, i8* %6
  %65 = sext i8 %64 to i32
  %66 = icmp eq i32 %65, 79
  br i1 %66, label %71, label %67
67:
  %68 = load i8, i8* %6
  %69 = sext i8 %68 to i32
  %70 = icmp eq i32 %69, 85
  br i1 %70, label %71, label %74
71:
  %72 = load i32, i32* %3
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %3
  br label %74
74:
  %75 = load i32, i32* %4
  %76 = add nsw i32 %75, 1
  store i32 %76, i32* %4
  store i32 1, i32* %5
  br label %77
77:
  br label %10
78:
  %79 = load i32, i32* %3
  ret i32 %79
}
