%struct.Range = type { i32, i32 }
define dso_local i32 @BinarySearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca %struct.Range
  %9 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %10 = load i32, i32* %6
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i32 -1, i32* %4
  br label %68
13:
  %15 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 0
  store i32 0, i32* %15
  %16 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 1
  %17 = load i32, i32* %6
  %18 = sub nsw i32 %17, 1
  store i32 %18, i32* %16
  br label %19
19:
  %20 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 0
  %21 = load i32, i32* %20
  %22 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 1
  %23 = load i32, i32* %22
  %24 = icmp slt i32 %21, %23
  br i1 %24, label %25, label %52
25:
  %27 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 0
  %28 = load i32, i32* %27
  %29 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 1
  %30 = load i32, i32* %29
  %31 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 0
  %32 = load i32, i32* %31
  %33 = sub nsw i32 %30, %32
  %34 = sdiv i32 %33, 2
  %35 = add nsw i32 %28, %34
  store i32 %35, i32* %9
  %36 = load i32*, i32** %5
  %37 = load i32, i32* %9
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  %41 = load i32, i32* %7
  %42 = icmp slt i32 %40, %41
  br i1 %42, label %43, label %47
43:
  %44 = load i32, i32* %9
  %45 = add nsw i32 %44, 1
  %46 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 0
  store i32 %45, i32* %46
  br label %50
47:
  %48 = load i32, i32* %9
  %49 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 1
  store i32 %48, i32* %49
  br label %50
50:
  br label %19
52:
  %53 = load i32*, i32** %5
  %54 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 0
  %55 = load i32, i32* %54
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %53, i64 %56
  %58 = load i32, i32* %57
  %59 = load i32, i32* %7
  %60 = icmp eq i32 %58, %59
  br i1 %60, label %61, label %64
61:
  %62 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 0
  %63 = load i32, i32* %62
  br label %65
64:
  br label %65
65:
  %66 = phi i32 [ %63, %61 ], [ -1, %64 ]
  store i32 %66, i32* %4
  br label %68
68:
  %69 = load i32, i32* %4
  ret i32 %69
}
