define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %9
9:
  %10 = load i8*, i8** %2
  %11 = load i32, i32* %3
  %12 = load i32, i32* %4
  %13 = add nsw i32 %11, %12
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i8, i8* %10, i64 %14
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %18, label %89
18:
  %20 = load i32, i32* %3
  %21 = load i32, i32* %4
  %22 = add nsw i32 %20, %21
  store i32 %22, i32* %5
  %24 = load i32, i32* %5
  %25 = icmp eq i32 %24, 0
  br i1 %25, label %35, label %26
26:
  %27 = load i8*, i8** %2
  %28 = load i32, i32* %5
  %29 = sub nsw i32 %28, 1
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %27, i64 %30
  %32 = load i8, i8* %31
  %33 = sext i8 %32 to i32
  %34 = icmp eq i32 %33, 32
  br label %35
35:
  %36 = phi i1 [ true, %18 ], [ %34, %26 ]
  %37 = zext i1 %36 to i32
  store i32 %37, i32* %6
  %38 = load i32, i32* %6
  %39 = icmp ne i32 %38, 0
  br i1 %39, label %40, label %58
40:
  %41 = load i8*, i8** %2
  %42 = load i32, i32* %5
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i8, i8* %41, i64 %43
  %45 = load i8, i8* %44
  %46 = sext i8 %45 to i32
  %47 = icmp sge i32 %46, 97
  br i1 %47, label %48, label %57
48:
  %49 = load i8*, i8** %2
  %50 = load i32, i32* %5
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  %53 = load i8, i8* %52
  %54 = sext i8 %53 to i32
  %55 = sub nsw i32 %54, 32
  %56 = trunc i32 %55 to i8
  store i8 %56, i8* %52
  br label %57
57:
  br label %84
58:
  %59 = load i8*, i8** %2
  %60 = load i32, i32* %5
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i8, i8* %59, i64 %61
  %63 = load i8, i8* %62
  %64 = sext i8 %63 to i32
  %65 = icmp sge i32 %64, 65
  br i1 %65, label %66, label %83
66:
  %67 = load i8*, i8** %2
  %68 = load i32, i32* %5
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i8, i8* %67, i64 %69
  %71 = load i8, i8* %70
  %72 = sext i8 %71 to i32
  %73 = icmp sle i32 %72, 90
  br i1 %73, label %74, label %83
74:
  %75 = load i8*, i8** %2
  %76 = load i32, i32* %5
  %77 = sext i32 %76 to i64
  %78 = getelementptr inbounds i8, i8* %75, i64 %77
  %79 = load i8, i8* %78
  %80 = sext i8 %79 to i32
  %81 = add nsw i32 %80, 32
  %82 = trunc i32 %81 to i8
  store i8 %82, i8* %78
  br label %83
83:
  br label %84
84:
  %85 = load i32, i32* %3
  %86 = add nsw i32 %85, 1
  store i32 %86, i32* %3
  br label %9
89:
  ret void
}
