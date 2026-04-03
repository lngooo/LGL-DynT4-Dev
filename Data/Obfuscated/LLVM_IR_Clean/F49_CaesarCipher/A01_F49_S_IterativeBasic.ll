define dso_local void @y(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  %9 = load i32, i32* %4
  %10 = srem i32 %9, 26
  %11 = add nsw i32 %10, 26
  %12 = srem i32 %11, 26
  store i32 %12, i32* %6
  br label %13
13:
  %14 = load i8*, i8** %3
  %15 = load i32, i32* %5
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i8, i8* %14, i64 %16
  %18 = load i8, i8* %17
  %19 = sext i8 %18 to i32
  %20 = icmp ne i32 %19, 0
  br i1 %20, label %21, label %91
21:
  %22 = load i8*, i8** %3
  %23 = load i32, i32* %5
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = icmp sge i32 %27, 97
  br i1 %28, label %29, label %54
29:
  %30 = load i8*, i8** %3
  %31 = load i32, i32* %5
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %30, i64 %32
  %34 = load i8, i8* %33
  %35 = sext i8 %34 to i32
  %36 = icmp sle i32 %35, 122
  br i1 %36, label %37, label %54
37:
  %38 = load i8*, i8** %3
  %39 = load i32, i32* %5
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = sub nsw i32 %43, 97
  %45 = load i32, i32* %6
  %46 = add nsw i32 %44, %45
  %47 = srem i32 %46, 26
  %48 = add nsw i32 %47, 97
  %49 = trunc i32 %48 to i8
  %50 = load i8*, i8** %3
  %51 = load i32, i32* %5
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  store i8 %49, i8* %53
  br label %88
54:
  %55 = load i8*, i8** %3
  %56 = load i32, i32* %5
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i8, i8* %55, i64 %57
  %59 = load i8, i8* %58
  %60 = sext i8 %59 to i32
  %61 = icmp sge i32 %60, 65
  br i1 %61, label %62, label %87
62:
  %63 = load i8*, i8** %3
  %64 = load i32, i32* %5
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i8, i8* %63, i64 %65
  %67 = load i8, i8* %66
  %68 = sext i8 %67 to i32
  %69 = icmp sle i32 %68, 90
  br i1 %69, label %70, label %87
70:
  %71 = load i8*, i8** %3
  %72 = load i32, i32* %5
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i8, i8* %71, i64 %73
  %75 = load i8, i8* %74
  %76 = sext i8 %75 to i32
  %77 = sub nsw i32 %76, 65
  %78 = load i32, i32* %6
  %79 = add nsw i32 %77, %78
  %80 = srem i32 %79, 26
  %81 = add nsw i32 %80, 65
  %82 = trunc i32 %81 to i8
  %83 = load i8*, i8** %3
  %84 = load i32, i32* %5
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i8, i8* %83, i64 %85
  store i8 %82, i8* %86
  br label %87
87:
  br label %88
88:
  %89 = load i32, i32* %5
  %90 = add nsw i32 %89, 1
  store i32 %90, i32* %5
  br label %13
91:
  ret void
}
