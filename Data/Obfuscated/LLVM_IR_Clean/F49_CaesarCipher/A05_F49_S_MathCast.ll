define dso_local void @Y(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %9 = load i32, i32* %4
  %10 = srem i32 %9, 26
  %11 = add nsw i32 %10, 26
  %12 = srem i32 %11, 26
  store i32 %12, i32* %5
  store i32 0, i32* %6
  br label %14
14:
  %15 = load i8*, i8** %3
  %16 = load i32, i32* %6
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i8, i8* %15, i64 %17
  %19 = load i8, i8* %18
  %20 = sext i8 %19 to i32
  %21 = icmp ne i32 %20, 0
  br i1 %21, label %24, label %22
22:
  br label %72
24:
  %26 = load i8*, i8** %3
  %27 = load i32, i32* %6
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i8, i8* %26, i64 %28
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  store i32 %31, i32* %7
  %32 = load i32, i32* %7
  %33 = icmp sge i32 %32, 97
  br i1 %33, label %34, label %49
34:
  %35 = load i32, i32* %7
  %36 = icmp sle i32 %35, 122
  br i1 %36, label %37, label %49
37:
  %38 = load i32, i32* %7
  %39 = sub nsw i32 %38, 97
  %40 = load i32, i32* %5
  %41 = add nsw i32 %39, %40
  %42 = srem i32 %41, 26
  %43 = add nsw i32 97, %42
  %44 = trunc i32 %43 to i8
  %45 = load i8*, i8** %3
  %46 = load i32, i32* %6
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %45, i64 %47
  store i8 %44, i8* %48
  br label %49
49:
  %50 = load i32, i32* %7
  %51 = icmp sge i32 %50, 65
  br i1 %51, label %52, label %67
52:
  %53 = load i32, i32* %7
  %54 = icmp sle i32 %53, 90
  br i1 %54, label %55, label %67
55:
  %56 = load i32, i32* %7
  %57 = sub nsw i32 %56, 65
  %58 = load i32, i32* %5
  %59 = add nsw i32 %57, %58
  %60 = srem i32 %59, 26
  %61 = add nsw i32 65, %60
  %62 = trunc i32 %61 to i8
  %63 = load i8*, i8** %3
  %64 = load i32, i32* %6
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i8, i8* %63, i64 %65
  store i8 %62, i8* %66
  br label %67
67:
  br label %69
69:
  %70 = load i32, i32* %6
  %71 = add nsw i32 %70, 1
  store i32 %71, i32* %6
  br label %14
72:
  ret void
}
